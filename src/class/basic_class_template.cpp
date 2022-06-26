class foo {
 public:
    // Members accessible by everyone
    foo(); // The default constructor.

 protected:
    // Members accessible by members, friends, and subclasses

 private:
    // Accessible only by members and friends
    void private_member_function(); // declared with no implementation
    int private_data_member_; // comp6771
    int mPrivateDataMember; // mtrn2500

 public:
    // May define multiple sections of the same name
};