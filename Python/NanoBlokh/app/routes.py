from flask import render_template
from app import app

@app.route('/')
@app.route('/index')
def index():
    user = {'username': 'Tracy'}
    posts = [
            {
                'author': {'username': 'Joseph'},
                'body': 'Beautiful day in Juja!'
                },
            {
                'author': {'username': 'Kimuchu'},
                'body': {'Yes, I like that figure'}
                }
            ]

    return render_template('index.html', title='Home', user=user)
