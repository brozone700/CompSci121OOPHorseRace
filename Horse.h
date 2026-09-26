#ifndef HORSE_H
#define HORSE_H

class Horse {
	private:
		const static int TrackLength = 15;
		int position;
		int name;

	public:
		Horse();
		void setName(int n);
		void advance();
		bool finished();
		void print();
};

#endif
