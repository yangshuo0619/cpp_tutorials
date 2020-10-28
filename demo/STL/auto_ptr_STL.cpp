template<class T>
class SmartPtr
{
public:
    SmartPtr(T *p = 0);
    SmartPtr(const SmartPtr& src);
    SmartPtr& operator = (const SmartPtr& rhs);
    T* operator -> ();
    T& operator * ();
    ~SmartPtr();

private:
    void decrRef()
    {
        if(--*m_pRef == 0)
        {
            delete m_ptr;
            delete m_pRef;
        }
    }

    T *m_ptr;
    size_t *m_pRef;
};