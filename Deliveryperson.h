
class Deliveryperson
{
	private:
     int Deliverypersonid;
		 int deliveryCustomerId;
		 char deliveryAddress[50];
		 int customerPhoneNumber;
	   char deliveryBy[50];

	public:
		
    Deliveryperson();
    Deliveryperson (int p_id)
{
  Deliverypersonid=p_id;
}
    Deliveryperson(int c_id,const char d_address[],int c_phonenumber, const char d_by[]);
  	void addDelivery();
		void editDelivery();
};