class QEvent{

public:

	enum Type {Janeiro = 1, Fevereiro = 2, Marco = 3};

	Qevent();
	Type type() const{};
	~Qevent();
	void setAccepted(bool accepted);
	void accpet();
	void ignore();
	bool isAccepted() const;
	void spontaneous() const;


private:

	bool Flag;
	bool Origin;

};
