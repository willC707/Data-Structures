

class card 

{
    protected:
        card(int val);
        card(card && obj);

    public:
        int getCard();
        virtual ~card();


    private:
        card() = delete;
        int cardVal;
};