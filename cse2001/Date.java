package cse2001;

public class Date {
    private int day;
    private String month;
    private int year;

    public Date(int day, String month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    // getters
    public int getDay() {
        return day;
    }

    public String getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }
}