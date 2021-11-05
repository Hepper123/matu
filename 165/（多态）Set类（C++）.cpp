#include "CSet.h"

bool Set::operator<=(const Set &s) const
{
    int is = 1;
    for (int i = 0; i < n; i++)
    {
        if (!s.IsElement(this->pS[i]))
        {
            is = 0;
            break;
        }
    }
    if (is)
    {
        return true;
    }
}

bool Set::operator==(const Set &s) const
{
    if (this->operator<=(s) && s.operator<=(*this))
    {
        return true;
    }
    else
    {
        return false;
    }
}

Set & Set:: operator +=(int e){
	int n = this -> n;bool f = 0;
	for(int i = 1; i <= n; ++i)if(this -> pS[i] == e)f = 1;
	if(!f){
		int *p = new int[n+2];
		for(int i = 1; i <= n; ++i){
			p[i] = this -> pS[i];
		}
		p[n+1] = e;
		this -> pS = p;
		this -> n++;
	}
	return *this;
}

Set &Set::operator-=(int e)
{

    if (!this->IsElement(e))
    {
        return *this;
    }
    else
    {
        int *a = new int[n];
        int i = 1, j = 1;
        while (i <= n)
        {
            if (this->pS[i] == e)
            {
                i++;
            }
            else
            {
                a[j] = pS[i];
                i++;
                j++;
            }
        }
        this->pS = a;
        this->n--;
        return *this;
    }
}

Set Set:: operator|(const Set &s) const{
    int *x = new int[s.n+this->n];
    for(int i = 1;i<=this->n;i++){
        x[i] = this->pS[i];
    }
    static Set p;
    p.pS = x;
    p.n = this->n;
    for(int i = 1;i<=s.n;i++){
        p+=s.pS[i];
    }
    return p;
}

Set Set::operator&(const Set &s) const{
    Set x;
    for(int i = 1;i<=this->n;i++){
        if(s.IsElement(this->pS[i])){
            x+=this->pS[i];
        }
    }
    return x;
}

Set Set::operator-(const Set &s) const{
    Set x;
    for(int i = 1;i<=this->n;i++){
        if(!s.IsElement(this->pS[i])){
            x+=this->pS[i];
        }
    }
    return x;
}
