class Incopiable
{
public:
   Incopiable(const Incopiable&) = delete;
   Incopiable & operator= (const Incopiable&) = delete;

protected:
   Incopiable() = default;
   ~Incopiable() = default;
};