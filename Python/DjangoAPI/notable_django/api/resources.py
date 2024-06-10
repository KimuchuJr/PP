from tastypie.resources import ModelResource
from api.models import Note
from tastypie.aithorization import Autorization

class NoteResource(ModelResource):
    class Meta:
        queryset = Note.objects.all()
        resource_name = 'note'
        authorization = Authorization()
